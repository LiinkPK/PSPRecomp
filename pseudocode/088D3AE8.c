/* Entry 0x088D3AE8 | file offset 0x000D0AC0 | FUN_088d3ae8 | bytes 116 */

void FUN_088d3ae8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  FUN_088da0a8(*(undefined4 *)(param_1 + param_2 * 4),param_3,auStack_60,auStack_20);
  puVar1 = (undefined4 *)(param_1 + param_4 * 4);
  FUN_088d9b84(*puVar1,auStack_60);
  FUN_088d9af4(*puVar1,auStack_20);
  return;
}

