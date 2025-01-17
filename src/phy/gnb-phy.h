/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2020 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of 5G-air-simulator
 *
 * 5G-air-simulator is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * 5G-air-simulator is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 5G-air-simulator; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Telematics Lab <telematics-dev@poliba.it>
 */


#ifndef GNB_PHY_H_
#define GNB_PHY_H_

#include "phy.h"
#include "../outputs.h"

class IdealControlMessage;
class GNodeB;

class GnbPhy :public Phy
{
public:
  GnbPhy();
  virtual ~GnbPhy();

  virtual void DoSetBandwidthManager (void);

  virtual void StartTx (shared_ptr<PacketBurst> p);
  virtual void StartRx (shared_ptr<PacketBurst> p, TransmittedSignal* txSignal);

  virtual void SendIdealControlMessage (IdealControlMessage *msg);
  virtual void ReceiveIdealControlMessage (IdealControlMessage *msg);

  void ReceiveReferenceSymbols (NetworkNode* n, TransmittedSignal* s);

  GNodeB* GetDevice(void);

};

#endif /* GNB_PHY_H_ */
