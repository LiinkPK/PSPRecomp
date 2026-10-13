/* Entry 0x088634BC | file offset 0x00060494 | FUN_088634bc | bytes 80 */

void FUN_088634bc(int param_1,undefined4 param_2)

{
  undefined1 auStack_110 [256];
  
  FUN_0893476c(auStack_110,"data/%s",param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xb4))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xb0),auStack_110);
  return;
}

