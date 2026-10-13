/* Entry 0x088A24D4 | file offset 0x0009F4AC | FUN_088a24d4 | bytes 400 */

int FUN_088a24d4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_089d6c98 == '\0') {
    iVar1 = 0;
  }
  else {
    if (*(int *)(DAT_09b4d2a0 + 0x600) < 1) {
      piVar2 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)(DAT_09b4d2a0 + 0x600) + -1;
      iVar1 = DAT_09b4d2a0 + iVar3 * 4;
      *(int *)(DAT_09b4d2a0 + 0x600) = iVar3;
      piVar2 = *(int **)(iVar1 + 0x500);
    }
    piVar4 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&DAT_089cac90;
      piVar2[1] = param_2;
      piVar2[2] = -1;
      piVar2[3] = param_3;
      piVar2[4] = 0;
      piVar4 = piVar2;
    }
    if (piVar4 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      iVar3 = FUN_088a20cc(0x5c);
      if (iVar3 != 0) {
        FUN_088a2024(iVar3,param_1,param_2,piVar4,param_4);
        iVar1 = iVar3;
      }
      if (iVar1 == 0) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),3);
        }
        iVar1 = 0;
      }
      else if (DAT_09b4cf9c == 0) {
        DAT_09b4cf98 = iVar1;
        DAT_09b4cf9c = iVar1;
        *(undefined4 *)(iVar1 + 0x58) = 0;
      }
      else {
        *(int *)(DAT_09b4cf9c + 0x58) = iVar1;
        *(undefined4 *)(iVar1 + 0x58) = 0;
        DAT_09b4cf9c = iVar1;
      }
    }
  }
  return iVar1;
}

