/* Entry 0x08946700 | file offset 0x001436D8 | FUN_08946700 | bytes 140 */

undefined4 FUN_08946700(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_089a0c8c(param_2);
  FUN_0896fb5c(param_1);
  iVar2 = 0;
  puVar1 = &DAT_089d9278;
  do {
    FUN_089a0520(1,0x980,2,puVar1,&DAT_089d9218);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0xc);
  return 0;
}

