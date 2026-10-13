/* Entry 0x08973E20 | file offset 0x00170DF8 | FUN_08973e20 | bytes 56 */

int FUN_08973e20(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = **(int **)(*param_1 + param_2 * 4);
  puVar2 = (undefined4 *)(iVar1 + *(int *)(iVar1 + 0x20) + param_3 * 8);
  *param_4 = *puVar2;
  return iVar1 + puVar2[1];
}

