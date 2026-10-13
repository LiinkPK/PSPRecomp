/* Entry 0x088636C4 | file offset 0x0006069C | FUN_088636c4 | bytes 228 */

undefined4 FUN_088636c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = sceIoWaitAsync(param_2,&local_10);
  if ((((iVar1 == 0) && (-1 < local_c)) || (*(char *)(param_3 + 0x149) != '\0')) ||
     (*(char *)(param_3 + 0x148) != '\0')) {
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x14) != 0) {
      (**(code **)(param_3 + 0x14))(local_10,*(undefined4 *)(param_3 + 0x18));
    }
  }
  else {
    (**(code **)(*(int *)(param_3 + 0x154) + 0xdc))
              (param_3 + *(short *)(*(int *)(param_3 + 0x154) + 0xd8),param_3 + 0x48,
               *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
               *(undefined1 *)(param_3 + 0x149));
  }
  return 0;
}

