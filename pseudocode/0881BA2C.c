/* Entry 0x0881BA2C | file offset 0x00018A04 | FUN_0881ba2c | bytes 108 */

undefined4 FUN_0881ba2c(char *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)0x0;
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 0x110);
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
      }
      if (puVar2 == (undefined4 *)0x0) break;
      FUN_08818db0(puVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

