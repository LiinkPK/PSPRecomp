/* Entry 0x088E2AFC | file offset 0x000DFAD4 | FUN_088e2afc | bytes 144 */

undefined4 FUN_088e2afc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0885c6cc(param_2,param_4,0,0,1,0);
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x5c) * 4 + 8) = uVar1;
  FUN_08935524(uVar1,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = iVar2 + 1;
  return *(undefined4 *)(param_1 + iVar2 * 4 + 8);
}

