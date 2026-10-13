/* Entry 0x088B9004 | file offset 0x000B5FDC | FUN_088b9004 | bytes 64 */

void FUN_088b9004(int param_1,undefined2 param_2)

{
  undefined2 local_c [2];
  
  local_c[0] = param_2;
  FUN_088b7204(param_1 + 0xaac,param_1 + *(int *)(param_1 + 0x15f8) * 4 + 0xaac,local_c,0);
  return;
}

