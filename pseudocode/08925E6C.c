/* Entry 0x08925E6C | file offset 0x00122E44 | FUN_08925e6c | bytes 364 */

int FUN_08925e6c(int param_1,short param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(iVar6 + 0xb8);
  iVar7 = 0;
  iVar3 = -1;
  if (0 < *pcVar1) {
    do {
      if ((int)*(short *)(iVar6 + 0x47c) == (int)param_2) {
        iVar3 = (int)(short)iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *pcVar1);
  }
  if (iVar3 == -1) {
    iVar3 = FUN_08925d34(param_1,(int)param_2);
    uVar4 = FUN_08862c40(*(int *)(param_1 + 0xc) + iVar3 * 0x4e + 0x22,1);
    uVar5 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),uVar4,0,0,1,0);
    uVar4 = FUN_08862854(*(int *)(param_1 + 0xc) + iVar3 * 0x4e + 0x22,uVar5,uVar4,1);
    FUN_0885c93c(uVar5);
    cVar2 = *(char *)(*(int *)(param_1 + 0x20) + 0xb8);
    iVar7 = iVar7 * 0xc;
    *(short *)(*(int *)(param_1 + 0x20) + iVar7 + 0x47c) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar7 + 0x480) = uVar5;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar7 + 0x484) = uVar4;
    iVar3 = (int)cVar2;
    *(char *)(*(int *)(param_1 + 0x20) + 0xb8) = *(char *)(*(int *)(param_1 + 0x20) + 0xb8) + '\x01'
    ;
  }
  return iVar3;
}

