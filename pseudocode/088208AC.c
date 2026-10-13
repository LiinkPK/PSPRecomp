/* Entry 0x088208AC | file offset 0x0001D884 | FUN_088208ac | bytes 164 */

undefined4 FUN_088208ac(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*param_2 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_08820dd0(param_1,param_2);
    FUN_08820d50(param_1,param_2);
    fVar2 = *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x2c);
    uVar1 = 0;
    *(float *)(param_2 + 0x30) = fVar2;
    *(float *)(param_2 + 0x30) = fVar2 - (float)(int)fVar2;
    *(float *)(param_2 + 0x34) = (fVar2 - (float)(int)fVar2) * 6.2831855;
  }
  return uVar1;
}

