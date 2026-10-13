/* Entry 0x088C04F8 | file offset 0x000BD4D0 | FUN_088c04f8 | bytes 84 */

undefined * FUN_088c04f8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined *)FUN_088c054c(&DAT_089cba68,&DAT_089cba87,&local_10);
  puVar2 = (undefined *)0xffffffff;
  if (puVar1 != &DAT_089cba87) {
    puVar2 = puVar1 + -0x89cba68;
  }
  return puVar2;
}

