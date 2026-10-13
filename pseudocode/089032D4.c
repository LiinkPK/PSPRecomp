/* Entry 0x089032D4 | file offset 0x001002AC | FUN_089032d4 | bytes 120 */

void FUN_089032d4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 0x194);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    (**(code **)(puVar1[1] + 0xc))((int)puVar1 + (int)*(short *)(puVar1[1] + 8),param_2);
  }
  return;
}

