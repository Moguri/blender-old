/*
 * Copyright 2011, Blender Foundation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor:
 *		Dalai Felinto
 */

#include "COM_CombineYUVANode.h"
#include "COM_ConvertOperation.h"

CombineYUVANode::CombineYUVANode(bNode *editorNode) : CombineRGBANode(editorNode)
{
	/* pass */
}

void CombineYUVANode::convertToOperations(ExecutionSystem *graph, CompositorContext *context)
{
	ConvertYUVToRGBOperation *operation = new ConvertYUVToRGBOperation();
	OutputSocket *outputSocket = this->getOutputSocket(0);
	if (outputSocket->isConnected()) {
		outputSocket->relinkConnections(operation->getOutputSocket());
		addLink(graph, outputSocket, operation->getInputSocket(0));
	}
	graph->addOperation(operation);
	CombineRGBANode::convertToOperations(graph, context);
}
