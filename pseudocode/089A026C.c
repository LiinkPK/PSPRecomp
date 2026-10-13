/* Entry 0x089A026C | file offset 0x0019D244 | FUN_089a026c | bytes 116 */

void FUN_089a026c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_0899fb08(DAT_09af680c,param_1,param_2,param_3,param_4);
  puVar3 = &DAT_09af6834;
  iVar4 = 4;
  do {
    uVar2 = DAT_09af6828;
    uVar1 = DAT_09af6824;
    iVar4 = iVar4 + -1;
    puVar3[0x27] = DAT_09af680c;
    puVar3[0x28] = uVar1;
    puVar3[0x29] = uVar2;
    puVar3 = puVar3 + 0x3f;
  } while (-1 < iVar4);
  return;
}

