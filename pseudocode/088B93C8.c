/* Entry 0x088B93C8 | file offset 0x000B63A0 | FUN_088b93c8 | bytes 468 */

undefined4 FUN_088b93c8(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_088b1d9c(param_3);
  if ((iVar2 != 0) && (((uint)*(ushort *)(iVar2 + 0x1e) & 1 << (param_2 & 0x1f)) != 0)) {
    cVar1 = *(char *)(iVar2 + 0x16);
    pcVar3 = (char *)0x0;
    pcVar4 = (char *)0x0;
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        cVar1 = *(char *)(iVar2 + 0x17);
        if (cVar1 < '\x01') {
          if (-1 < cVar1) {
            pcVar3 = (char *)(param_1 + param_2 * 0x1e);
            pcVar4 = (char *)(param_1 + param_2 * 0x1e + 3);
          }
        }
        else if (cVar1 < '\x02') {
          param_1 = param_1 + param_2 * 0x1e;
          pcVar3 = (char *)(param_1 + 3);
          pcVar4 = (char *)(param_1 + 6);
        }
        else if (cVar1 < '\x03') {
          pcVar3 = (char *)(param_1 + param_2 * 0x1e);
          pcVar4 = (char *)(param_1 + param_2 * 0x1e + 6);
        }
      }
    }
    else if (cVar1 < '\x02') {
      cVar1 = *(char *)(iVar2 + 0x17);
      if (cVar1 < '\x01') {
        if (-1 < cVar1) {
          param_1 = param_1 + param_2 * 0x1e;
          pcVar3 = (char *)(param_1 + 6);
          pcVar4 = (char *)(param_1 + 9);
        }
      }
      else if (cVar1 < '\x02') {
        param_1 = param_1 + param_2 * 0x1e;
        pcVar3 = (char *)(param_1 + 9);
        pcVar4 = (char *)(param_1 + 0xc);
      }
      else if (cVar1 < '\x03') {
        param_1 = param_1 + param_2 * 0x1e;
        pcVar3 = (char *)(param_1 + 6);
        pcVar4 = (char *)(param_1 + 0xc);
      }
    }
    for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 1) {
      if (*pcVar3 == -1) {
        *pcVar3 = (char)param_3;
        return 1;
      }
    }
  }
  return 0;
}

