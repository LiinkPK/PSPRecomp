/* Entry 0x088644DC | file offset 0x000614B4 | FUN_088644dc | bytes 96 */

void FUN_088644dc(int param_1,undefined4 param_2)

{
  undefined1 auStack_110 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_110,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xc4))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xc0),auStack_110,0);
  return;
}

