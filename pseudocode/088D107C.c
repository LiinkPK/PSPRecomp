/* Entry 0x088D107C | file offset 0x000CE054 | FUN_088d107c | bytes 156 */

undefined4 * FUN_088d107c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x336c);
  **(undefined4 **)(param_1 + 0x336c) = 0;
  *(undefined4 *)(param_1 + 0x336c) = *(undefined4 *)(*(int *)(param_1 + 0x336c) + 4);
  FUN_088da92c(puVar1);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  FUN_088db30c(puVar1,param_2,param_3);
  FUN_088ceec8(param_1,puVar1);
  *(undefined1 *)((int)puVar1 + 0x17) = 0;
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  return puVar1;
}

