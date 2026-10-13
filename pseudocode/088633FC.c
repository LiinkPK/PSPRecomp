/* Entry 0x088633FC | file offset 0x000603D4 | FUN_088633fc | bytes 80 */

void FUN_088633fc(int param_1,undefined4 param_2)

{
  undefined1 auStack_110 [256];
  
  FUN_0893476c(auStack_110,"data/%s",param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x6c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x68),auStack_110);
  return;
}

