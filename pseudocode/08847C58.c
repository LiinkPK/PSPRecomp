/* Entry 0x08847C58 | file offset 0x00044C30 | FUN_08847c58 | bytes 76 */

bool FUN_08847c58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x544);
  iVar1 = (**(code **)(iVar1 + 0x134))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x130));
  return param_2 == **(char **)(iVar1 + 0x30c);
}

