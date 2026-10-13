/* Entry 0x08892FD0 | file offset 0x0008FFA8 | FUN_08892fd0 | bytes 492 */

undefined4 FUN_08892fd0(int param_1,int param_2,byte param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x6b3) == '\x01') {
    uVar3 = 1;
  }
  else {
    piVar2 = (int *)FUN_08899300();
    if (*piVar2 != 0) {
      uVar3 = FUN_08899300();
      uVar3 = FUN_088985f0(uVar3,param_2);
      iVar5 = FUN_088939ec(param_1,uVar3);
      if (iVar5 != 0) {
        return 1;
      }
    }
    iVar4 = 0;
    iVar5 = param_1;
    do {
      if (*(short *)(iVar5 + 0x612) == param_2) {
        *(undefined1 *)(iVar5 + 0x616) = 1;
        *(byte *)(iVar5 + 0x617) = *(byte *)(iVar5 + 0x617) | param_3;
        *(undefined1 *)(iVar5 + 0x61a) = 3;
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 10;
    } while (iVar4 < 0x10);
    iVar4 = 0;
    bVar1 = true;
    iVar5 = param_1;
    do {
      if (*(short *)(iVar5 + 0x612) == -1) break;
      iVar4 = iVar4 + 1;
      bVar1 = iVar4 < 0x10;
      iVar5 = iVar5 + 10;
    } while (bVar1);
    if (bVar1) {
      piVar2 = (int *)FUN_08899300();
      if (*piVar2 != 0) {
        uVar3 = FUN_08899300();
        iVar4 = FUN_088987e8(uVar3,param_2);
        if (iVar4 != 0) {
          uVar3 = FUN_08899300();
          iVar4 = FUN_088985f0(uVar3,param_2);
          if (-1 < iVar4) {
            *(short *)(iVar5 + 0x612) = (short)param_2;
            *(undefined2 *)(iVar5 + 0x614) = 100;
            *(undefined1 *)(iVar5 + 0x616) = 1;
            *(byte *)(iVar5 + 0x617) = param_3;
            *(undefined1 *)(iVar5 + 0x618) = 0xff;
            uVar3 = *(undefined4 *)(param_1 + 0x74);
            *(undefined1 *)(iVar5 + 0x61a) = 3;
            FUN_0886bb44(uVar3,iVar4,1,1,1);
            return 1;
          }
        }
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

