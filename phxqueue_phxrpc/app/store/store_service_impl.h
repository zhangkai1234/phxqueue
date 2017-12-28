/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* store_service_impl.h

 Generated by phxrpc_pb2service from store.proto

*/

#pragma once

#include "phxqueue/store.h"

#include "phxrpc_store_service.h"
#include "store.pb.h"


class StoreServerConfig;


typedef struct tagServiceArgs {
    StoreServerConfig *config;
    phxqueue::store::Store *store;
} ServiceArgs_t;


class StoreServiceImpl : public StoreService {
  public:
    StoreServiceImpl(ServiceArgs_t &app_args);
    virtual ~StoreServiceImpl();

    virtual int PhxEcho(const google::protobuf::StringValue &req,
                        google::protobuf::StringValue *resp) override;

    virtual int Add(const phxqueue::comm::proto::AddRequest &req,
                    phxqueue::comm::proto::AddResponse *resp) override;

    virtual int Get(const phxqueue::comm::proto::GetRequest &req,
                    phxqueue::comm::proto::GetResponse *resp) override;

  private:
    ServiceArgs_t &args_;
    phxqueue::store::Store *store_{nullptr};
};

