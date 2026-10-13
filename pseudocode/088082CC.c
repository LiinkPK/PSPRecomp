/* Entry 0x088082CC | file offset 0x000052A4 | FUN_088082cc | bytes 84 */

undefined4 FUN_088082cc(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    do {
      iVar3 = DAT_089d2800;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x6c);
      }
      if (iVar3 == 0) {
        bVar1 = false;
        goto LAB_0880830c;
      }
      iVar4 = iVar3;
    } while (iVar3 != param_1);
    bVar1 = true;
LAB_0880830c:
    if (bVar1) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

