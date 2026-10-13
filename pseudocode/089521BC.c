/* Entry 0x089521BC | file offset 0x0014F194 | FUN_089521bc | bytes 184 */

void FUN_089521bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if ((*(int *)(*(int *)(param_2 + 0x8c) + 0x18) == 0) &&
     (*(char *)(*(int *)(param_2 + 0x8c) + 0x58) == '\x02')) {
    puVar1 = param_4 + 4;
    FUN_089484a4(param_2,2,puVar1,0,*(int *)(param_2 + 0x88) + 0x50,puVar1,0,1);
    *param_4 = *puVar1;
    param_4[1] = param_4[5];
    param_4[2] = param_4[6];
    param_4[3] = param_4[7];
  }
  return;
}

