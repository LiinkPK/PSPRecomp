/* Entry 0x08915DA8 | file offset 0x00112D80 | FUN_08915da8 | bytes 376 */

void FUN_08915da8(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0x744) + 8) == 0) && (*(int *)(param_1 + 0x68) != 3)) {
    FUN_089359a4(param_1 + 0x770,param_2);
    *(undefined1 *)(param_1 + 0x7d7) = 0;
    FUN_08914b64(param_1,3);
    *(undefined1 *)(param_1 + 0x7d6) = param_3;
    if (*(char *)(param_1 + 0x7d6) == '\0') {
      *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
           *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
    }
    if (-1 < *(int *)(param_1 + 0x90)) {
      func_0x08a64054(*(undefined4 *)
                       (*(int *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x704) + 0x5c4),1);
    }
    iVar1 = FUN_089359e8(param_1 + 0x770);
    if (iVar1 != 0) {
      uVar2 = FUN_0885c40c(*(undefined4 *)(param_1 + 0x750),0xc8000,"WM::TMP_MEMORY",0x10);
      *(undefined4 *)(param_1 + 0x754) = uVar2;
      uVar2 = FUN_0885c6cc(uVar2,0x40000,0x40,0,1,0);
      *(undefined4 *)(param_1 + 0x748) = uVar2;
      uVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0x754),0x5000,0x40,0,1,0);
      *(undefined4 *)(param_1 + 0x74c) = uVar2;
      *(undefined1 *)(param_1 + 0x7d5) = 0;
      FUN_088fe850(param_2,uVar2,0x5000,FUN_08917274,param_1,0);
    }
  }
  return;
}

