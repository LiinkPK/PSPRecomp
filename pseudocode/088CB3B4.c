/* Entry 0x088CB3B4 | file offset 0x000C838C | FUN_088cb3b4 | bytes 84 */

undefined * FUN_088cb3b4(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined *)FUN_088cb2c0(&DAT_089cbc98,&DAT_089cbcb7,&local_10);
  puVar2 = (undefined *)0xffffffff;
  if (puVar1 != &DAT_089cbcb7) {
    puVar2 = puVar1 + -0x89cbc98;
  }
  return puVar2;
}

