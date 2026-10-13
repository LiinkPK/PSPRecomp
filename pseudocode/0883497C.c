/* Entry 0x0883497C | file offset 0x00031954 | FUN_0883497c | bytes 196 */

void FUN_0883497c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *(undefined4 *)(param_2 + 0xf0);
  local_2c = *(undefined4 *)(param_2 + 0xf4);
  local_28 = *(undefined4 *)(param_2 + 0xf8);
  local_14 = 0;
  local_24 = 0;
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  FUN_08835c24(param_2,&local_30);
  FUN_08834948(param_2);
  iVar1 = *(int *)(param_2 + 0x314);
  if (*(float *)(param_2 + 0xf4) < 0.0) {
    *(float *)(iVar1 + 0x20) = *(float *)(param_2 + 0xf4);
    iVar1 = *(int *)(param_2 + 0x314);
  }
  *(undefined4 *)(iVar1 + 0x38) = param_1;
  return;
}

