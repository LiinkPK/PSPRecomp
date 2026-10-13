/* Entry 0x0885E0A4 | file offset 0x0005B07C | FUN_0885e0a4 | bytes 172 */

void FUN_0885e0a4(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)FUN_089a00f4(0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0xffff;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = 0xffff;
  uVar2 = FUN_089a04c4(9);
  FUN_089a03dc(9);
  FUN_089a0c8c(param_4);
  FUN_089a0520(6,0x800100,2,0,puVar1);
  FUN_089a0438(9,uVar2);
  return;
}

