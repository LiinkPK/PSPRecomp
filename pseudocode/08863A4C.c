/* Entry 0x08863A4C | file offset 0x00060A24 | FUN_08863a4c | bytes 244 */

void FUN_08863a4c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (param_1 < 0) {
    bVar1 = false;
  }
  else {
    *(int *)(param_2 + 0x3c) = param_1;
    if (*(char *)(param_2 + 0x149) == '\x01') {
      iVar2 = sceNpDrmEdataSetupKey(*(undefined4 *)(param_2 + 0x3c));
      bVar1 = -1 < iVar2;
    }
  }
  if (bVar1) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x4c))
              (param_2 + *(short *)(*(int *)(param_2 + 0x154) + 0x48),param_1,
               *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),FUN_08863b40,param_2,
               *(undefined1 *)(param_2 + 0x149));
  }
  else if (*(code **)(param_2 + 0x34) != (code *)0x0) {
    (**(code **)(param_2 + 0x34))(param_1,*(undefined4 *)(param_2 + 0x38));
  }
  return;
}

