// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "Game.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::soccer;

class GameHandler : virtual public GameIf {
 public:
  GameHandler() {
    // Your initialization goes here
  }

  void GetPlayerActions(PlayerActions& _return, const State& state) {
    // Your implementation goes here
    printf("GetPlayerActions\n");
  }

  void GetCoachActions(CoachActions& _return, const State& state) {
    // Your implementation goes here
    printf("GetCoachActions\n");
  }

  void GetTrainerActions(TrainerActions& _return, const State& state) {
    // Your implementation goes here
    printf("GetTrainerActions\n");
  }

  void SendInitMessage(Empty& _return, const InitMessage& init_message) {
    // Your implementation goes here
    printf("SendInitMessage\n");
  }

  void SendServerParams(Empty& _return, const ServerParam& server_param) {
    // Your implementation goes here
    printf("SendServerParams\n");
  }

  void SendPlayerParams(Empty& _return, const PlayerParam& player_param) {
    // Your implementation goes here
    printf("SendPlayerParams\n");
  }

  void SendPlayerType(Empty& _return, const PlayerType& player_type) {
    // Your implementation goes here
    printf("SendPlayerType\n");
  }

  void GetInitMessage(InitMessageFromServer& _return, const Empty& empty) {
    // Your implementation goes here
    printf("GetInitMessage\n");
  }

  void SendByeCommand(Empty& _return, const Empty& empty) {
    // Your implementation goes here
    printf("SendByeCommand\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<GameHandler> handler(new GameHandler());
  ::std::shared_ptr<TProcessor> processor(new GameProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

