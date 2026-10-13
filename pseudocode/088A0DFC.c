/* Entry 0x088A0DFC | file offset 0x0009DDD4 | FUN_088a0dfc | bytes 152 */

undefined4 FUN_088a0dfc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + param_2 * 0x30);
  if ((*piVar2 != -1) && (iVar1 = piVar2[10], piVar2[10] = iVar1 + -1, iVar1 + -1 == 0)) {
    FUN_088a1638(DAT_089d6c88,*piVar2);
    if (piVar2[1] != 0) {
      FUN_088a0cd4();
    }
    *piVar2 = -1;
    piVar2[1] = 0;
    *(undefined1 *)(piVar2 + 2) = 0;
    piVar2[10] = 0;
    *(undefined1 *)(piVar2 + 0xb) = 0;
  }
  return 1;
}

