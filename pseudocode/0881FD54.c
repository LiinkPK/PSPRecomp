/* Entry 0x0881FD54 | file offset 0x0001CD2C | FUN_0881fd54 | bytes 144 */

void FUN_0881fd54(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x38) == 1) {
    fVar1 = (float)FUN_0881fce8();
    fVar2 = (float)FUN_0881fcc4(param_1);
    fVar3 = (float)FUN_0881fc58(param_1);
    FUN_0881fde4(0,fVar3 * 2.0 + fVar2 + fVar1,param_1);
  }
  else {
    FUN_0881fde4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x30),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x34));
  }
  return;
}

