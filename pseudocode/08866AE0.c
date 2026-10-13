/* Entry 0x08866AE0 | file offset 0x00063AB8 | FUN_08866ae0 | bytes 200 */

void FUN_08866ae0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2ccf) == '\0') {
    if (*(int *)(param_1 + 0x8c0) == 0) {
      uVar1 = 0x44000;
    }
    else {
      uVar1 = 0;
    }
    FUN_089a02e0(1,uVar1,0x200);
    FUN_089a0330(0x88000,0x200);
  }
  else {
    if (*(int *)(param_1 + 0x8c0) == 0) {
      uVar1 = 0x88000;
    }
    else {
      uVar1 = 0;
    }
    FUN_089a02e0(3,uVar1,0x200);
    FUN_089a0330(0x110000,0x200);
  }
  FUN_089a0aec(0x800,0x800,0x1e0,0x110);
  FUN_089a1200(0,0,0x1e0,0x110);
  FUN_089a0be4(0x710,0x778);
  return;
}

