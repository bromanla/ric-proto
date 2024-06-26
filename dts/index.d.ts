
import { Greeter } from './ric-echo.js';
import { RicCode } from './ric-code.js';
import { FunctionControl, PublicAPI } from './ric-action.js';
import { Geo } from './ric-geo.js';
import { RicAuth } from './ric-auth.js';
import { RicLogicV3 } from './ric-logic-v3.js';
import { TaskService, KindService } from './ric-tasks.js';
import { RicStore } from './ric-store.js';
import { Bots } from './ric-bots.js';
import { Billing } from './ric-bill.js';
import { SMPP, SMTP, Push, HTTP, Notifier } from './ric-notify.js';
import { Service } from './ric-handler.js';
import { RicWeb } from './ric-web.js';
import { RicPacketSpy } from './ric-packet-spy.js';
import { Command } from './ric-cmds.js';
import { Stats } from './ric-stats.js';

interface GrpcRegistry {
  /* clients */  
  getClient(service: 'ric-echo'): Greeter;
  getClient(service: 'ric-echo/Greeter'): Greeter;

  getClient(service: 'ric-code'): RicCode;
  getClient(service: 'ric-code/RicCode'): RicCode;

  getClient(service: 'ric-action'): FunctionControl;
  getClient(service: 'ric-action/FunctionControl'): FunctionControl;
  getClient(service: 'ric-action/PublicAPI'): PublicAPI;

  getClient(service: 'ric-geo'): Geo;
  getClient(service: 'ric-geo/Geo'): Geo;

  getClient(service: 'ric-auth'): RicAuth;
  getClient(service: 'ric-auth/RicAuth'): RicAuth;

  getClient(service: 'ric-logic-v3'): RicLogicV3;
  getClient(service: 'ric-logic-v3/RicLogicV3'): RicLogicV3;

  getClient(service: 'ric-tasks'): TaskService;
  getClient(service: 'ric-tasks/TaskService'): TaskService;
  getClient(service: 'ric-tasks/KindService'): KindService;

  getClient(service: 'ric-store'): RicStore;
  getClient(service: 'ric-store/RicStore'): RicStore;

  getClient(service: 'ric-bots'): Bots;
  getClient(service: 'ric-bots/Bots'): Bots;

  getClient(service: 'ric-bill'): Billing;
  getClient(service: 'ric-bill/Billing'): Billing;

  getClient(service: 'ric-notify'): SMPP;
  getClient(service: 'ric-notify/SMPP'): SMPP;
  getClient(service: 'ric-notify/SMTP'): SMTP;
  getClient(service: 'ric-notify/Push'): Push;
  getClient(service: 'ric-notify/HTTP'): HTTP;
  getClient(service: 'ric-notify/Notifier'): Notifier;

  getClient(service: 'ric-handler'): Service;
  getClient(service: 'ric-handler/Service'): Service;

  getClient(service: 'ric-web'): RicWeb;
  getClient(service: 'ric-web/RicWeb'): RicWeb;

  getClient(service: 'ric-packet-spy'): RicPacketSpy;
  getClient(service: 'ric-packet-spy/RicPacketSpy'): RicPacketSpy;

  getClient(service: 'ric-cmds'): Command;
  getClient(service: 'ric-cmds/Command'): Command;

  getClient(service: 'ric-stats'): Stats;
  getClient(service: 'ric-stats/Stats'): Stats;


  /* servers */ 
  addServer(service: 'ric-echo', impl: Greeter);
  addServer(service: 'ric-echo/Greeter', impl: Greeter);

  addServer(service: 'ric-code', impl: RicCode);
  addServer(service: 'ric-code/RicCode', impl: RicCode);

  addServer(service: 'ric-action', impl: FunctionControl);
  addServer(service: 'ric-action/FunctionControl', impl: FunctionControl);
  addServer(service: 'ric-action/PublicAPI', impl: PublicAPI);

  addServer(service: 'ric-geo', impl: Geo);
  addServer(service: 'ric-geo/Geo', impl: Geo);

  addServer(service: 'ric-auth', impl: RicAuth);
  addServer(service: 'ric-auth/RicAuth', impl: RicAuth);

  addServer(service: 'ric-logic-v3', impl: RicLogicV3);
  addServer(service: 'ric-logic-v3/RicLogicV3', impl: RicLogicV3);

  addServer(service: 'ric-tasks', impl: TaskService);
  addServer(service: 'ric-tasks/TaskService', impl: TaskService);
  addServer(service: 'ric-tasks/KindService', impl: KindService);

  addServer(service: 'ric-store', impl: RicStore);
  addServer(service: 'ric-store/RicStore', impl: RicStore);

  addServer(service: 'ric-bots', impl: Bots);
  addServer(service: 'ric-bots/Bots', impl: Bots);

  addServer(service: 'ric-bill', impl: Billing);
  addServer(service: 'ric-bill/Billing', impl: Billing);

  addServer(service: 'ric-notify', impl: SMPP);
  addServer(service: 'ric-notify/SMPP', impl: SMPP);
  addServer(service: 'ric-notify/SMTP', impl: SMTP);
  addServer(service: 'ric-notify/Push', impl: Push);
  addServer(service: 'ric-notify/HTTP', impl: HTTP);
  addServer(service: 'ric-notify/Notifier', impl: Notifier);

  addServer(service: 'ric-handler', impl: Service);
  addServer(service: 'ric-handler/Service', impl: Service);

  addServer(service: 'ric-web', impl: RicWeb);
  addServer(service: 'ric-web/RicWeb', impl: RicWeb);

  addServer(service: 'ric-packet-spy', impl: RicPacketSpy);
  addServer(service: 'ric-packet-spy/RicPacketSpy', impl: RicPacketSpy);

  addServer(service: 'ric-cmds', impl: Command);
  addServer(service: 'ric-cmds/Command', impl: Command);

  addServer(service: 'ric-stats', impl: Stats);
  addServer(service: 'ric-stats/Stats', impl: Stats);
}

declare const index: { registry: GrpcRegistry };
export default index;
export type { GrpcRegistry };
