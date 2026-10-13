/* Entry 0x0881C010 | file offset 0x00018FE8 | FUN_0881c010 | bytes 152 */

undefined4 FUN_0881c010(char *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_1[8] == '\x01') {
    uVar1 = 0;
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
      if (puVar2[4] == 1) {
        FUN_08818e48(puVar2);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

