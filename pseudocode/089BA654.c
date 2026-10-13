/* Entry 0x089BA654 | file offset 0x001B762C | FUN_089ba654 | bytes 240 */

int * FUN_089ba654(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = param_1 * 0x18;
  uVar4 = (uint)*(ushort *)(&DAT_089daf38 + iVar1);
  uVar3 = uVar4;
  if (uVar4 < param_2) {
    uVar3 = param_2;
  }
  uVar5 = 3;
  if (3 < uVar3) {
    uVar5 = -param_3 & 3;
  }
  iVar2 = (*(code *)(&PTR_FUN_089daf30)[param_1 * 6])(uVar5 + (uVar3 - uVar4) + param_3 + 0x10);
  uVar3 = (param_2 + iVar2) - 1 & -param_2;
  piVar6 = (int *)0x0;
  if (iVar2 != 0) {
    iVar7 = *(int *)(&DAT_089daf3c + iVar1);
    piVar6 = (int *)(param_3 + uVar3 + 3 & 0xfffffffc);
    *(int **)(&DAT_089daf3c + iVar1) = piVar6;
    if (iVar7 != 0) {
      *(int **)(iVar7 + 4) = piVar6;
    }
    *(char *)((int)piVar6 + 0xd) = (char)uVar3 - (char)iVar2;
    piVar6[2] = iVar7;
    *(char *)(piVar6 + 3) = (char)param_1;
    *(undefined2 *)((int)piVar6 + 0xe) = 1;
    *piVar6 = iVar2;
    piVar6[1] = 0;
  }
  return piVar6;
}

