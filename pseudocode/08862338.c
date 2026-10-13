/* Entry 0x08862338 | file offset 0x0005F310 | FUN_08862338 | bytes 104 */

void FUN_08862338(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_110 [256];
  
  FUN_08862678(auStack_110,&DAT_089c8f94,"aerith.bin");
  uVar1 = FUN_08861b84("dlc/aerith.bin");
  FUN_0893476c(param_1,"%s/%s.edat",auStack_110,uVar1);
  return;
}

