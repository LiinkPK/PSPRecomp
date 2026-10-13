/* Entry 0x08973508 | file offset 0x001704E0 | FUN_08973508 | bytes 96 */

void FUN_08973508(float param_1,float param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = **(int **)(*param_3 + param_4 * 4);
  FUN_089a0f84(param_1 / (float)*(int *)(iVar1 + 0x1c) + (float)param_3[10],
               param_2 / (float)*(int *)(iVar1 + 0x20) + (float)param_3[0xb]);
  return;
}

