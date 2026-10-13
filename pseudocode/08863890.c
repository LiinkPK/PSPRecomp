/* Entry 0x08863890 | file offset 0x00060868 | FUN_08863890 | bytes 216 */

undefined4 FUN_08863890(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar1 = sceIoWaitAsync(param_2,local_20);
  if (((iVar1 == 0) && (-1 < local_1c)) || (*(char *)(param_3 + 0x148) != '\0')) {
    *(undefined4 *)(param_3 + 0x20) = 0;
    if (*(int *)(param_3 + 0x14) != 0) {
      (**(code **)(param_3 + 0x14))(*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x18))
      ;
    }
  }
  else {
    (**(code **)(*(int *)(param_3 + 0x154) + 0x94))
              (param_3 + *(short *)(*(int *)(param_3 + 0x154) + 0x90),param_2,
               *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18));
  }
  return 0;
}

