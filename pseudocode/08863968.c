/* Entry 0x08863968 | file offset 0x00060940 | FUN_08863968 | bytes 228 */

undefined4 FUN_08863968(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = sceIoWaitAsync(param_2,&local_20);
  if (((iVar1 == 0) && (-1 < local_1c)) || (*(char *)(param_3 + 0x148) != '\0')) {
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x14) != 0) {
      (**(code **)(param_3 + 0x14))(local_20,*(undefined4 *)(param_3 + 0x18));
    }
  }
  else {
    (**(code **)(*(int *)(param_3 + 0x154) + 0xec))
              (param_3 + *(short *)(*(int *)(param_3 + 0x154) + 0xe8),param_2,
               *(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
               *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18));
  }
  return 0;
}

