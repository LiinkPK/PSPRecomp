/* Entry 0x08951DE0 | file offset 0x0014EDB8 | FUN_08951de0 | bytes 184 */

void FUN_08951de0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

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

