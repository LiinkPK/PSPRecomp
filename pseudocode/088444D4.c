/* Entry 0x088444D4 | file offset 0x000414AC | FUN_088444d4 | bytes 76 */

undefined4 * FUN_088444d4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 8);
    }
    else {
      puVar1 = (undefined4 *)puVar1[0x3a];
    }
    if (puVar1 == (undefined4 *)0x0) break;
    if (*(short *)*puVar1 == param_2) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

