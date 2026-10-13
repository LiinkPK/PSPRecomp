/* Entry 0x0881FAEC | file offset 0x0001CAC4 | FUN_0881faec | bytes 124 */

undefined4 FUN_0881faec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0881fe78(param_1,param_2);
    FUN_0881ff98(param_1,param_2);
    FUN_0881ff14(param_1,param_2);
    uVar1 = 0;
    *(float *)(param_2 + 0x3c) =
         *(float *)(param_2 + 0x30) * *(float *)(param_2 + 0x34) * *(float *)(param_2 + 0x38);
  }
  return uVar1;
}

