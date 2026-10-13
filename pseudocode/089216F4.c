/* Entry 0x089216F4 | file offset 0x0011E6CC | FUN_089216f4 | bytes 52 */

void FUN_089216f4(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x84);
  uVar3 = *(undefined4 *)(iVar1 + 0x88);
  *param_1 = *(undefined4 *)(iVar1 + 0x80);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

