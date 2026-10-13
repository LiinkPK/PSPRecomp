/* Entry 0x088726B0 | file offset 0x0006F688 | FUN_088726b0 | bytes 144 */

ulonglong FUN_088726b0(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  uVar2 = FUN_0887263c(param_1,puVar1,*puVar1,puVar1[1],&DAT_089c9738);
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = FUN_0887263c(param_1,puVar1,*puVar1,puVar1[1],*(int *)(param_1 + 0x4c));
    uVar2 = uVar3 | uVar2;
    puVar1 = *(undefined4 **)(param_1 + 0x40);
  }
  FUN_089a3868(param_1 + 0x20,puVar1 + 8);
  return uVar2;
}

