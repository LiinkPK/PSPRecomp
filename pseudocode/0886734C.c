/* Entry 0x0886734C | file offset 0x00064324 | FUN_0886734c | bytes 128 */

void FUN_0886734c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_088677c0(param_1,*param_1);
  param_1[3] = (int)puVar1;
  *puVar1 = 0;
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar2 = FUN_08867780(param_1,0x14);
  *(int *)(param_1[3] + 4) = (iVar3 + iVar4) - (param_1[3] + iVar2);
  *(undefined4 *)(param_1[3] + 8) = 0;
  *(undefined4 *)(param_1[3] + 0xc) = 0;
  *(undefined4 *)(param_1[3] + 0x10) = 0;
  param_1[4] = 1;
  return;
}

