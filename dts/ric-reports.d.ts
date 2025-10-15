
import { Stream } from 'stream';

interface GrpcStream<T> extends Stream {
  write(chunk: T): boolean;
  on(event: 'data', listener: (chunk: T) => void): this;
}

export interface RicReport {
  Export(request: ExportRequest, clientCall?: GrpcStream<FileChunk>): any;

  streamed?(): {
    Export(request: ExportRequest): GrpcStream<FileChunk>;
  };
}

export interface UserContext {
  groupId?: string;
  userId?: string;
  spanId?: string;
}

export interface FileChunk {
  data?: any;
  filename?: string;
  encoding?: string;
  contentType?: string;
}

export interface ExportRequest {
  ctx?: UserContext;
  buildId?: string;
  format?: string;
}