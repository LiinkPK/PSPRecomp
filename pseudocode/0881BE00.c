/* Entry 0x0881BE00 | file offset 0x00018DD8 | FUN_0881be00 | bytes 180 */

undefined4 FUN_0881be00(char *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar1 = 0xfffffffe;
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
      if (puVar2[5] == param_2) {
        FUN_08818e48(puVar2);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

