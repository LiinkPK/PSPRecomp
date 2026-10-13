/* Entry 0x08913E10 | file offset 0x00110DE8 | FUN_08913e10 | bytes 604 */

void FUN_08913e10(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(char *)(param_1 + 0x7d8) == '\0') && (*(char *)(param_1 + 0x7e1) == '\0')) &&
      (*(char *)(param_1 + 0x7e2) == '\0')) && (*(char *)(param_1 + 0x7e3) == '\0')) {
    iVar2 = FUN_08920244(DAT_089d712c + 0x3f548);
    if (iVar2 == 0) {
      func_0x08b4511c(*(undefined4 *)(param_1 + 0x8c));
      iVar2 = func_0x08b43a3c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x6d0));
      if (-1 < iVar2) {
        iVar3 = FUN_08910644(iVar2);
        if (((*(uint *)(iVar3 + 8) & 4) != 0) && (-1 < *(short *)(iVar3 + 0x10))) {
          *(int *)(param_1 + 0x38) = (int)*(short *)(iVar3 + 0x10);
          *(int *)(param_1 + 0x40) = (int)*(short *)(iVar3 + 0x12);
          FUN_08914d9c(param_1);
          FUN_08914b64(param_1,6);
          FUN_08916c18(param_1,0xffffffff);
          return;
        }
        if (-1 < *(short *)(iVar3 + 4)) {
          iVar4 = FUN_0891705c(0xffffffff);
          FUN_08912674(iVar4,iVar2);
          *(short *)(iVar4 + 0x1b2) = (short)*(undefined4 *)(param_1 + 0x38);
          sVar1 = *(short *)(iVar3 + 4);
          *(undefined4 *)(param_1 + 0x764) = 2;
          *(int *)(param_1 + 0x760) = (int)sVar1;
          FUN_08914cdc(param_1);
          FUN_08914b64(param_1,5);
          FUN_08916c18(param_1,0xffffffff);
          if (*(int *)(param_1 + 0x6d0) == 0) {
            return;
          }
          *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
               *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
          return;
        }
      }
      if (*(char *)(param_1 + 0x7d4) == '\0') {
        FUN_08919a14(param_1);
        if (*(int *)(param_1 + 0x68) == 2) {
          if (*(char *)(param_1 + 0x7e7) == '\0') {
            FUN_0890f668(param_1 + 0x90);
          }
          FUN_089156d8(param_1);
        }
      }
      else {
        FUN_08915da8(param_1,param_1 + 0x770,0);
        *(undefined1 *)(param_1 + 0x7d4) = 0;
      }
    }
    else {
      func_0x08b49de4(*(undefined4 *)(param_1 + 0x570));
      FUN_08914b64(param_1,4);
      *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
           *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
      *(undefined1 *)(param_1 + 0x7d7) = 0;
    }
  }
  return;
}

