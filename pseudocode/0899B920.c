/* Entry 0x0899B920 | file offset 0x001988F8 | FUN_0899b920 | bytes 192 */

void FUN_0899b920(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(&DAT_09af679c + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
      do {
        puVar3 = puVar2;
        if ((puVar3 <= param_2) && (param_2 < (undefined4 *)puVar3[2])) {
          sVar1 = *(short *)(puVar3 + 1);
          *(short *)(puVar3 + 1) = sVar1 + -1;
          if ((short)(sVar1 + -1) != 0) {
            return;
          }
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined4 *)(&DAT_09af679c + param_1 * 4) = *puVar3;
          }
          else {
            *puVar4 = *puVar3;
          }
          (*(code *)(&PTR_FUN_089da4cc)[param_1])();
          return;
        }
        puVar2 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
    }
    (*(code *)(&PTR_FUN_089da4cc)[param_1])(param_2);
  }
  return;
}

