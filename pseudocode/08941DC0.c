/* Entry 0x08941DC0 | file offset 0x0013ED98 | FUN_08941dc0 | bytes 512 */

int FUN_08941dc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_1[5]) {
    do {
      if (**(int **)(*param_1 + iVar6 * 4) == 0) {
        iVar1 = sceIoOpen(param_2,1,0x1ff);
        iVar2 = sceIoLseek(iVar1);
        sceIoLseek(iVar1);
        uVar3 = (*(code *)param_1[7])(iVar2 + 0x1f);
        *(undefined4 *)(param_1[3] + iVar1 * 4) = uVar3;
        uVar5 = *(int *)(param_1[3] + iVar1 * 4) + 0x1fU & 0xffffffe0;
        sceIoRead(iVar1,uVar5,iVar2);
        iVar4 = (**(code **)(param_1[9] + 100))
                          ((int)param_1 + (int)*(short *)(param_1[9] + 0x60),uVar5);
        if (iVar4 == 0) {
          (*(code *)param_1[8])(*(undefined4 *)(param_1[3] + iVar1 * 4));
          *(undefined4 *)(param_1[3] + iVar1 * 4) = 0;
          return -1;
        }
        sceKernelDcacheWritebackInvalidateRange(uVar5,iVar2);
        sceIoClose(iVar1);
        iVar2 = iVar6 * 4;
        iVar1 = *(int *)(*(int *)(*param_1 + iVar2) + 4);
        (**(code **)(iVar1 + 0x2c))
                  (*(int *)(*param_1 + iVar2) + (int)*(short *)(iVar1 + 0x28),uVar5);
        uVar3 = (**(code **)(param_1[9] + 0x5c))
                          ((int)param_1 + (int)*(short *)(param_1[9] + 0x58),uVar5);
        *(undefined4 *)(param_1[2] + iVar2) = uVar3;
        *(int *)(param_1[4] + iVar2) = *(int *)(param_1[4] + iVar2) + 1;
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[5]);
  }
  return -1;
}

