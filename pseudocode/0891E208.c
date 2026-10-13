/* Entry 0x0891E208 | file offset 0x0011B1E0 | FUN_0891e208 | bytes 152 */

void FUN_0891e208(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    fVar3 = *(float *)(DAT_089d69e0 + 0x18);
    iVar1 = FUN_0891e78c();
    if (iVar1 == 1) {
      FUN_0891e1ec(param_1);
      fVar2 = *(float *)(param_1 + 0x18c);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x18c);
      if (180.0 <= fVar2) {
        FUN_0891e70c(*(undefined4 *)(param_1 + 0x13c));
        fVar2 = *(float *)(param_1 + 0x18c);
      }
    }
    *(float *)(param_1 + 0x18c) = fVar2 + fVar3;
  }
  return;
}

